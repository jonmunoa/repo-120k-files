// fichero 14149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14149;

Registro14149 crear_registro14149(int id) {
    Registro14149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
