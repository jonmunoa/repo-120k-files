// fichero 45117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45117;

Registro45117 crear_registro45117(int id) {
    Registro45117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
