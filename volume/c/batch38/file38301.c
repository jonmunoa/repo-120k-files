// fichero 38301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38301;

Registro38301 crear_registro38301(int id) {
    Registro38301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
