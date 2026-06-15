// fichero 42649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42649;

Registro42649 crear_registro42649(int id) {
    Registro42649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
