// fichero 35505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35505;

Registro35505 crear_registro35505(int id) {
    Registro35505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
