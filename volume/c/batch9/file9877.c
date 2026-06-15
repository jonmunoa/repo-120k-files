// fichero 9877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9877;

Registro9877 crear_registro9877(int id) {
    Registro9877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
