// fichero 28741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28741;

Registro28741 crear_registro28741(int id) {
    Registro28741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
