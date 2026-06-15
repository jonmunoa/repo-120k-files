// fichero 40057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40057;

Registro40057 crear_registro40057(int id) {
    Registro40057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
