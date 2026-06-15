// fichero 9549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9549;

Registro9549 crear_registro9549(int id) {
    Registro9549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
