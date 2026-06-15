// fichero 40461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40461;

Registro40461 crear_registro40461(int id) {
    Registro40461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
