// fichero 9697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9697;

Registro9697 crear_registro9697(int id) {
    Registro9697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
