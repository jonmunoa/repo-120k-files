// fichero 40737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40737;

Registro40737 crear_registro40737(int id) {
    Registro40737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
