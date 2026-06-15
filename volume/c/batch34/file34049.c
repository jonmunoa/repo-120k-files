// fichero 34049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34049;

Registro34049 crear_registro34049(int id) {
    Registro34049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
