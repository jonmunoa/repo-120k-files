// fichero 41713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41713;

Registro41713 crear_registro41713(int id) {
    Registro41713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
