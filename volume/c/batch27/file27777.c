// fichero 27777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27777;

Registro27777 crear_registro27777(int id) {
    Registro27777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
