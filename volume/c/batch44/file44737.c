// fichero 44737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44737;

Registro44737 crear_registro44737(int id) {
    Registro44737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
