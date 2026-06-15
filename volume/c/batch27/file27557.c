// fichero 27557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27557;

Registro27557 crear_registro27557(int id) {
    Registro27557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
