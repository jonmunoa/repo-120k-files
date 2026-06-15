// fichero 35897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35897;

Registro35897 crear_registro35897(int id) {
    Registro35897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
