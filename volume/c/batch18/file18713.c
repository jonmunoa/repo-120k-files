// fichero 18713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18713;

Registro18713 crear_registro18713(int id) {
    Registro18713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
