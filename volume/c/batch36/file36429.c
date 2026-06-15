// fichero 36429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36429;

Registro36429 crear_registro36429(int id) {
    Registro36429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
