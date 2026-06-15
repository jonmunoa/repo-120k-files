// fichero 34345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34345;

Registro34345 crear_registro34345(int id) {
    Registro34345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
