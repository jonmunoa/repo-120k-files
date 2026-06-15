// fichero 34057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34057;

Registro34057 crear_registro34057(int id) {
    Registro34057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
