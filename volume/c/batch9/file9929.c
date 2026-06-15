// fichero 9929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9929;

Registro9929 crear_registro9929(int id) {
    Registro9929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
