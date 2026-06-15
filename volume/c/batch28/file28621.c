// fichero 28621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28621;

Registro28621 crear_registro28621(int id) {
    Registro28621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
