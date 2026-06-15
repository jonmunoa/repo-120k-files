// fichero 941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro941;

Registro941 crear_registro941(int id) {
    Registro941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
