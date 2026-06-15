// fichero 8941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8941;

Registro8941 crear_registro8941(int id) {
    Registro8941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
