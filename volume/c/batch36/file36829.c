// fichero 36829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36829;

Registro36829 crear_registro36829(int id) {
    Registro36829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
