// fichero 17689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17689;

Registro17689 crear_registro17689(int id) {
    Registro17689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
