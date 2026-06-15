// fichero 9993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9993;

Registro9993 crear_registro9993(int id) {
    Registro9993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
