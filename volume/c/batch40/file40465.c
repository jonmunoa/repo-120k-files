// fichero 40465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40465;

Registro40465 crear_registro40465(int id) {
    Registro40465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
