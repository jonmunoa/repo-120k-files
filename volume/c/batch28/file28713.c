// fichero 28713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28713;

Registro28713 crear_registro28713(int id) {
    Registro28713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
