// fichero 34737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34737;

Registro34737 crear_registro34737(int id) {
    Registro34737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
