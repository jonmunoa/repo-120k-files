// fichero 42689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42689;

Registro42689 crear_registro42689(int id) {
    Registro42689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
