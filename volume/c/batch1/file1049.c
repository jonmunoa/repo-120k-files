// fichero 1049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1049;

Registro1049 crear_registro1049(int id) {
    Registro1049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
