// fichero 9737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9737;

Registro9737 crear_registro9737(int id) {
    Registro9737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
