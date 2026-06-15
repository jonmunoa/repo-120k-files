// fichero 9429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9429;

Registro9429 crear_registro9429(int id) {
    Registro9429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
