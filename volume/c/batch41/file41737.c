// fichero 41737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41737;

Registro41737 crear_registro41737(int id) {
    Registro41737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
