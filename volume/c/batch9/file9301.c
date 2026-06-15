// fichero 9301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9301;

Registro9301 crear_registro9301(int id) {
    Registro9301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
