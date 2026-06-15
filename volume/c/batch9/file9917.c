// fichero 9917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9917;

Registro9917 crear_registro9917(int id) {
    Registro9917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
