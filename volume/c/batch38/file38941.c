// fichero 38941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38941;

Registro38941 crear_registro38941(int id) {
    Registro38941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
