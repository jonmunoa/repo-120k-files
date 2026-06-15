// fichero 34301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34301;

Registro34301 crear_registro34301(int id) {
    Registro34301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
