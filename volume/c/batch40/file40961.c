// fichero 40961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40961;

Registro40961 crear_registro40961(int id) {
    Registro40961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
