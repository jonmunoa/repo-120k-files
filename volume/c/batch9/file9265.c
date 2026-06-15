// fichero 9265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9265;

Registro9265 crear_registro9265(int id) {
    Registro9265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
