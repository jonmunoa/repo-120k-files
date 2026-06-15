// fichero 9225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9225;

Registro9225 crear_registro9225(int id) {
    Registro9225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
