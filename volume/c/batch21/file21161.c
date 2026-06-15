// fichero 21161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21161;

Registro21161 crear_registro21161(int id) {
    Registro21161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
