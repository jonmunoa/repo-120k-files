// fichero 27197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27197;

Registro27197 crear_registro27197(int id) {
    Registro27197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
