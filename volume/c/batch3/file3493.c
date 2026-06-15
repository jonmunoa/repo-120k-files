// fichero 3493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3493;

Registro3493 crear_registro3493(int id) {
    Registro3493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
