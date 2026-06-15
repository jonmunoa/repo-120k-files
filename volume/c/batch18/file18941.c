// fichero 18941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18941;

Registro18941 crear_registro18941(int id) {
    Registro18941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
