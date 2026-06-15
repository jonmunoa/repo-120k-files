// fichero 42981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42981;

Registro42981 crear_registro42981(int id) {
    Registro42981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
