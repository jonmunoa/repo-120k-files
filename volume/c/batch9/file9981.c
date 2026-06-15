// fichero 9981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9981;

Registro9981 crear_registro9981(int id) {
    Registro9981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
