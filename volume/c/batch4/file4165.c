// fichero 4165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4165;

Registro4165 crear_registro4165(int id) {
    Registro4165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
