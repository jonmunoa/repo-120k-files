// fichero 27941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27941;

Registro27941 crear_registro27941(int id) {
    Registro27941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
