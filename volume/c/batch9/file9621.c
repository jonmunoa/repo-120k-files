// fichero 9621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9621;

Registro9621 crear_registro9621(int id) {
    Registro9621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
