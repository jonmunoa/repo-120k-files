// fichero 3941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3941;

Registro3941 crear_registro3941(int id) {
    Registro3941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
