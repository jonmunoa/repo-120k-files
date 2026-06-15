// fichero 27193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27193;

Registro27193 crear_registro27193(int id) {
    Registro27193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
