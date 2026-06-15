// fichero 34001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34001;

Registro34001 crear_registro34001(int id) {
    Registro34001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
